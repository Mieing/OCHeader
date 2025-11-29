@class NSArray, NSDictionary, NSString;
@protocol IESLiveDIContext, IESLiveBeautyHandlerDelegate;

@interface IESLiveBeautyHandlerWrapperConfig : NSObject

@property (retain, nonatomic) NSArray *handlerTypes;
@property (retain, nonatomic) NSDictionary *handlerDic;
@property (weak, nonatomic) id<IESLiveBeautyHandlerDelegate> handlerDelegate;
@property (nonatomic) long long scene;
@property (retain, nonatomic) id<IESLiveDIContext> diContext;
@property (retain, nonatomic) NSString *prefixKey;

- (void).cxx_destruct;

@end
