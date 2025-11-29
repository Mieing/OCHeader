@class NSString;

@interface AWENoticeSettingItemModel : NSObject

@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isSelect;
@property (copy, nonatomic) id /* block */ cellTappedBlock;

- (void).cxx_destruct;

@end
