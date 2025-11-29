@class NSString, NSData, GameplayError;

@interface GameplayResultModel : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSData *fileData;
@property (copy, nonatomic) NSString *resultType;
@property (retain, nonatomic) GameplayError *error;

- (void).cxx_destruct;

@end
