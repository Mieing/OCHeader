@class BDName, NSString, NSArray, NSData, NSDate, BDJob;

@interface BDContactsModel : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) BDName *name;
@property (retain, nonatomic) BDJob *job;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSArray *phones;
@property (retain, nonatomic) NSArray *emails;
@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *socialProfiles;
@property (retain, nonatomic) NSArray *instantMessage;
@property (retain, nonatomic) NSArray *websites;
@property (retain, nonatomic) NSDate *birthday;
@property (retain, nonatomic) NSString *note;
@property (retain, nonatomic) NSArray *relatedPersons;
@property (retain, nonatomic) NSArray *dates;

- (void).cxx_destruct;

@end
