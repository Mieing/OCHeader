@interface IESECPageInterfaceHelper : NSObject

@property (nonatomic) long long interfaceCounts;
@property (nonatomic) BOOL isEnableRecord;

- (void)cancelValidInterface;
- (BOOL)isValidInterface;
- (void)recordValidInterface;
- (void)resetValidInterface;
- (id)init;

@end
