@class NSString;

@interface AWEIMCustomizeMessageCellClickActionAdapterImplDefault : NSObject <AWEIMCustomizeMessageCellClickActionAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id /* block */)overrideActionWithMessage:(id)a0 extra:(id)a1;
- (id /* block */)p_actionForShareH5MessageWithAwemeType:(long long)a0 isSender:(BOOL)a1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
