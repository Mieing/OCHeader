@class NSString;

@interface TextStateSimplifiedIcon : NSObject

@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *iconDescription;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long iconOption;

- (id)initWithIcon:(id)a0;
- (id)initWithIconId:(id)a0 iconActions:(id)a1;
- (void).cxx_destruct;

@end
