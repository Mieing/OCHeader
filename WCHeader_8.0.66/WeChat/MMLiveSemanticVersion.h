@class NSString;

@interface MMLiveSemanticVersion : NSObject

@property (nonatomic) unsigned long long major;
@property (nonatomic) unsigned long long minor;
@property (nonatomic) unsigned long long patch;
@property (retain, nonatomic) NSString *previewTag;
@property (retain, nonatomic) NSString *buildTag;

+ (id)semanticVersionFromString:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
