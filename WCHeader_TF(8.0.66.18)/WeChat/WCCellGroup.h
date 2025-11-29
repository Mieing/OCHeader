@class NSString, NSDate;

@interface WCCellGroup : NSObject

@property (readonly, nonatomic) long long homepageType;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleAlignment;
@property (copy, nonatomic) NSString *location;

- (id)initWithHomepageType:(long long)a0;
- (void).cxx_destruct;

@end
