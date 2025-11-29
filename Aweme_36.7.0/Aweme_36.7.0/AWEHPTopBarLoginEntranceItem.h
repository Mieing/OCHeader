@class NSString;

@interface AWEHPTopBarLoginEntranceItem : AWEHPTopBarBaseEntranceItem <AWEHPTopBarEntranceItemProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)entranceShouldShow;
+ (id)entranceBizID;

@end
