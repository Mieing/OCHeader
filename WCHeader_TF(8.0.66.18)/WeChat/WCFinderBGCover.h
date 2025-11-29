@class NSString;

@interface WCFinderBGCover : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *urlColorValue;
@property (retain, nonatomic) NSString *parsedColorValue;

+ (id)BGCoverWithURL:(id)a0 oldCover:(id)a1;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)urlColor;
- (id)parsedColor;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
