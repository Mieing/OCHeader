@class NSNumber, NSString, NSArray;

@interface AWEStudioRecorderFeatureRecordMode : NSObject

@property (readonly, copy, nonatomic) NSNumber *modeID;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *submodeArray;
@property (copy, nonatomic) NSNumber *landingSubmodeID;

- (id)initWithModeID:(id)a0 name:(id)a1;
- (void).cxx_destruct;

@end
