@class NSString, NSData;

@interface VeBaseChannelMessage : NSObject

@property (copy, nonatomic) NSString *mid;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *time;
@property (copy, nonatomic) NSString *srcUid;
@property (copy, nonatomic) NSString *destUid;

- (void).cxx_destruct;

@end
