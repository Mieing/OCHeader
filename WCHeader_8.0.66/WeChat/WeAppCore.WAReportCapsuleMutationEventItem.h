@interface WeAppCore.WAReportCapsuleMutationEventItem : WAReportBaseItem

@property (nonatomic) void /* unknown type, empty encoding */ action;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic) void /* unknown type, empty encoding */ coexistType;

+ (long long)trans2CapsuleTypeWithState:(long long)a0;

- (int)reportID;
- (id)reportString;
- (id)init;

@end
