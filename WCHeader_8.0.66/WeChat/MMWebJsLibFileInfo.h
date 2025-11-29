@class NSString;

@interface MMWebJsLibFileInfo : MMObject

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int size;

- (void).cxx_destruct;

@end
