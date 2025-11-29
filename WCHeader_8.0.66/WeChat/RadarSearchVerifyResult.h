@class NSString;

@interface RadarSearchVerifyResult : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *encryUsrName;
@property (nonatomic) int type;

- (void)dealloc;
- (void).cxx_destruct;

@end
