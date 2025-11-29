@class NSString, AWEIMMessage, NSArray;

@interface AWEIMCardBelowQuickEmoticonTargetModel : NSObject <AWEIMCardBelowQuickEmoticonTargetModel, AWEIMMessageListDataAction>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) NSArray *renderModelArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
