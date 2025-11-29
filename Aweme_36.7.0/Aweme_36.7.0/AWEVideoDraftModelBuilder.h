@class NSString, NSNumber;

@interface AWEVideoDraftModelBuilder : NSObject

@property (retain, nonatomic) NSString *draftID;
@property (retain, nonatomic) NSNumber *saveDate;
@property (retain, nonatomic) NSNumber *draftStatus;
@property (retain, nonatomic) NSNumber *expireTime;
@property (retain, nonatomic) NSNumber *draftType;
@property (retain, nonatomic) NSNumber *backup;

- (void).cxx_destruct;
- (id)build;

@end
