@class NSString;

@interface BDPDevelopModeInfoItem : NSObject <NSCoding>

@property (nonatomic) long long infoType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;

- (void).cxx_destruct;

@end
