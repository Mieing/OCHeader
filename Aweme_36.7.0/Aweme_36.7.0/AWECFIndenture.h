@class NSArray, NSString, NSBundle, NSError;

@interface AWECFIndenture : NSObject

@property (retain, nonatomic) NSError *loadingError;
@property (copy, nonatomic) NSArray *loadedClassRecords;
@property (copy, nonatomic) NSString *sourceFilePath;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSBundle *bundle;

- (void).cxx_destruct;

@end
