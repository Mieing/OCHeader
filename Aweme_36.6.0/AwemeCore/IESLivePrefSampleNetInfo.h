@class NSString, NSNumber;

@interface IESLivePrefSampleNetInfo : NSObject

@property (copy, nonatomic) NSString *net_type;
@property (retain, nonatomic) NSNumber *connectionType;
@property (retain, nonatomic) NSNumber *upload;
@property (retain, nonatomic) NSNumber *download;
@property (retain, nonatomic) NSNumber *http_rtt;

- (void).cxx_destruct;

@end
