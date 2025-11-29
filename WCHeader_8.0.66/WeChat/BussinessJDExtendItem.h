@class NSString;

@interface BussinessJDExtendItem : MMObject

@property (retain, nonatomic) NSString *nsIconUrl;
@property (retain, nonatomic) NSString *nsName;
@property (retain, nonatomic) NSString *nsJumpUrl;
@property (retain, nonatomic) NSString *nsJumpWeapp;
@property (retain, nonatomic) NSString *nsJumpWeappPath;
@property (nonatomic) long long nsJumpWeappVersion;

- (void).cxx_destruct;

@end
