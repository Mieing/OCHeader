@class NSString;

@interface AWEIMFansGroupMasterStateAlertInfo : NSObject

@property (copy, nonatomic) NSString *tipStr;
@property (copy, nonatomic) NSString *cancelStr;
@property (copy, nonatomic) NSString *saveStr;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ saveBlock;

- (void).cxx_destruct;

@end
