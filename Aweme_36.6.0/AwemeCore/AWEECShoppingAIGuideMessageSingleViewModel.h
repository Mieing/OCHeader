@class NSString, AWEECShoppingGuideMessageSectionModel, AWEECShoppingAIGuideMessageGroupViewModel, NSNumber;

@interface AWEECShoppingAIGuideMessageSingleViewModel : NSObject <AWEECShoppingAIGuideMessageSingleViewModelProtocol>

@property (retain, nonatomic) AWEECShoppingGuideMessageSectionModel *msgModel;
@property (weak, nonatomic) AWEECShoppingAIGuideMessageGroupViewModel *originGroupMsgViewModel;
@property (nonatomic) BOOL isTopInGroup;
@property (nonatomic) BOOL isBottomInGroup;
@property (nonatomic) BOOL isLastMsg;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSNumber *marginTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateViewModelWithCardInfo:(id)a0 preferModel:(id)a1;

- (id)initWithMsgModel:(id)a0;
- (double)singleMsgHeight;
- (void).cxx_destruct;

@end
