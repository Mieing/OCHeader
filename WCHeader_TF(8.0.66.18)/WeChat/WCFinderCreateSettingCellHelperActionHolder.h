@class NSObject;

@interface WCFinderCreateSettingCellHelperActionHolder : NSObject

@property (weak, nonatomic) NSObject *owner;
@property (copy, nonatomic) id /* block */ block;

+ (id)instanceWithBlock:(id /* block */)a0;

- (void)onAction:(id)a0;
- (void)attachToOwner:(id)a0;
- (void).cxx_destruct;

@end
