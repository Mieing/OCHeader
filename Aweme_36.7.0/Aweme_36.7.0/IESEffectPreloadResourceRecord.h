@class NSString, NSMutableArray;

@interface IESEffectPreloadResourceRecord : NSObject

@property (retain, nonatomic) NSMutableArray *refBusinessList;
@property (copy, nonatomic) NSString *resourceKey;
@property (copy, nonatomic) NSString *resourceURI;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *level;
@property (nonatomic) unsigned long long size;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) double lastUseTime;
@property (nonatomic) unsigned long long useCount;

- (void).cxx_destruct;

@end
