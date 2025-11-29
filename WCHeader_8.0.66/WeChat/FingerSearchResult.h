@class NSString;

@interface FingerSearchResult : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned char weight;
@property (nonatomic) unsigned int location;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int chatFingerPatternType;

- (unsigned long long)contentLength;
- (id)description;
- (void).cxx_destruct;

@end
