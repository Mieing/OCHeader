@class NSString;

@interface MMEditImageMediaInfo : NSObject

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) unsigned int duration;

- (id)initWithJsonStr:(id)a0;
- (id)getDict;
- (id)toJson;
- (void).cxx_destruct;

@end
