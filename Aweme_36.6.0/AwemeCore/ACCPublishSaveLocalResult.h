@class NSError;

@interface ACCPublishSaveLocalResult : NSObject

@property (nonatomic) BOOL success;
@property (nonatomic) BOOL cancel;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
