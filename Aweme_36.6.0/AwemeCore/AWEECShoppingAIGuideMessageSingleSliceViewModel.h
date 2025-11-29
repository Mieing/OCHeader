@class NSString;

@interface AWEECShoppingAIGuideMessageSingleSliceViewModel : AWEECShoppingAIGuideMessageSingleViewModel

@property (nonatomic) double actuallyHeight;
@property (retain, nonatomic) NSString *sliceCardID;

+ (id)generateViewModelWithCardInfo:(id)a0 preferModel:(id)a1;

- (id)initWithMsgModel:(id)a0;
- (double)singleMsgHeight;
- (void).cxx_destruct;
- (id)init;

@end
