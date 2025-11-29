@class NSString;

@interface ACCQuickFlashTopicsParams : NSObject

@property (copy, nonatomic) NSString *zipURI;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *createId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long recommendType;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *ulikeStyleId;

- (id)paramsId;
- (void).cxx_destruct;

@end
