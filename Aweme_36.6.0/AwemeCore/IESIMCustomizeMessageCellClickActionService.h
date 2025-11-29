@class NSString;

@interface IESIMCustomizeMessageCellClickActionService : NSObject <IESIMCustomizeMessageCellClickActionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)customizeMessageCellClickActionTypeKey;
- (id /* block */)overrideActionWithMessage:(id)a0 extra:(id)a1;
- (id)aAWEIMCustomizeMessageCellClickActionAdapter;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
