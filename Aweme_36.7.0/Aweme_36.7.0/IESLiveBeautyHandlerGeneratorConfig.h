@class NSString, IESLiveBeautyHandlerContext;
@protocol IESLiveBeautyHandlerDelegate;

@interface IESLiveBeautyHandlerGeneratorConfig : NSObject

@property (nonatomic) long long type;
@property (weak, nonatomic) id<IESLiveBeautyHandlerDelegate> delegate;
@property (retain, nonatomic) IESLiveBeautyHandlerContext *context;
@property (retain, nonatomic) NSString *prefixKey;

- (void).cxx_destruct;

@end
