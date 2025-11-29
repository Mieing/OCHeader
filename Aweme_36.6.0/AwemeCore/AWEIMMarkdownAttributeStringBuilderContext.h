@class NSMutableDictionary, AWEIMComponentContext;
@protocol IESIMMdCodeBlockViewDelegate, IESIMMdTableCollectionViewDelegate;

@interface AWEIMMarkdownAttributeStringBuilderContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *presenterMap;
@property (weak, nonatomic) id<IESIMMdCodeBlockViewDelegate, IESIMMdTableCollectionViewDelegate> delegate;
@property (retain, nonatomic) AWEIMComponentContext *messageContext;

- (void).cxx_destruct;

@end
