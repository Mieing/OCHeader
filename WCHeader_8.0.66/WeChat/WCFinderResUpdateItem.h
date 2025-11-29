@class NSArray, NSString;

@interface WCFinderResUpdateItem : NSObject

@property (nonatomic) unsigned int resType;
@property (retain, nonatomic) NSArray *subTypes;
@property (retain, nonatomic) NSString *resBaseDir;
@property (retain, nonatomic) NSString *manifestFile;

+ (id)resItemWithResType:(unsigned int)a0 subTypes:(id)a1 resBaseDir:(id)a2 manifestFile:(id)a3;
+ (id)resItemWithResType:(unsigned int)a0 resBaseDir:(id)a1;

- (void).cxx_destruct;

@end
