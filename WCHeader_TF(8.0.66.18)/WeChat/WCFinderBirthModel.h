@class NSDateComponents;

@interface WCFinderBirthModel : NSObject

@property (retain, nonatomic) NSDateComponents *components;
@property (nonatomic) long long birthYear;
@property (nonatomic) long long birthMonth;

- (id)initWithYear:(long long)a0 month:(long long)a1;
- (id)initWithDate:(id)a0;
- (id)genDate;
- (void).cxx_destruct;

@end
