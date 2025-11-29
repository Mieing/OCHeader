@class NSString;

@interface IESLiveSubscribeVIPEmoticonTabEntranceItem : NSObject <IESLiveSubscribeVIPEmoticonTabEntranceItemProtocol>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableTip;
@property (copy, nonatomic) NSString *selectImageURL;
@property (copy, nonatomic) NSString *unselectImageURL;
@property (copy, nonatomic) NSString *tabTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
