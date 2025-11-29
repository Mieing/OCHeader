@class NSString;

@interface AWEMusicNewAnchorModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *anchorId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
