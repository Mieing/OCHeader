@class NSError;

@interface BDUGBaseResponse : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id jsonObj;
@property (nonatomic) BOOL success;

- (void).cxx_destruct;

@end
