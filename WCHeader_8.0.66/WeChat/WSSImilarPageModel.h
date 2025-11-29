@class NSArray, NSString;

@interface WSSImilarPageModel : NSObject

@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *resultWording;
@property (retain, nonatomic) NSString *guideText;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) NSString *searchID;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
