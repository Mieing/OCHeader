@class NSDictionary, NSArray;

@interface TTAccountTicketGuardSecUidConfig : NSObject

@property (copy, nonatomic) NSDictionary *secUserIdGuardConfig;
@property (readonly, nonatomic) BOOL enableSecUserIdGuard;
@property (readonly, nonatomic) NSArray *secUserIdGuardPaths;
@property (readonly, nonatomic) BOOL disableSecUidGuardPathOnly;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
