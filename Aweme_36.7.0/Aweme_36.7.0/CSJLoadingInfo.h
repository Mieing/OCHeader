@class NSString;

@interface CSJLoadingInfo : NSObject <NSCoding>

@property (nonatomic) long long if_playable_loading_show;
@property (nonatomic) long long remove_loading_page_type;
@property (nonatomic) long long playable_loading_style;
@property (copy, nonatomic) NSString *playable_loading_img_url;
@property (copy, nonatomic) NSString *playable_loading_icon_url;
@property (copy, nonatomic) NSString *playable_loading_tips;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
