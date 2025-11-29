@class NSString, NSArray;

@interface IESECSpecStateHelper : NSObject

@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSArray *specItemIDList;
@property (retain, nonatomic) NSString *selectedSpecItemID;
@property (retain, nonatomic) NSArray *otherSpecSelectedItemIDList;

- (void).cxx_destruct;

@end
