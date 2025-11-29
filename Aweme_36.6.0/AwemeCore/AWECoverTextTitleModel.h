@class NSNumber, NSString;

@interface AWECoverTextTitleModel : NSObject

@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSNumber *title_id;
@property (readonly, copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *source;

+ (id)objectWithDictionary:(id)a0;
+ (id)defaultItem;

- (void).cxx_destruct;
- (id)trackInfo;

@end
