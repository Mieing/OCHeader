@class NSString;

@interface PathInfo : NSObject

@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *typeName;

- (void).cxx_destruct;

@end
