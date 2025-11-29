@class NSString, UIImage;

@interface AWESearchCoverTagComponentModel : AWESearchComponentBasicModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long tagType;
@property (nonatomic) long long coverTagType;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *localImage;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
