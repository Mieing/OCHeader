@class NSNumber, NSString;

@interface MAV4Status : NSObject

@property (retain, nonatomic) NSNumber *errcode;
@property (retain, nonatomic) NSString *errdetail;
@property (retain, nonatomic) NSString *errmsg;

- (void).cxx_destruct;

@end
