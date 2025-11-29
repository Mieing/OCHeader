@class NSNumber, NSDate;

@interface AWEPadAgePickerViewModel : NSObject

@property (retain, nonatomic) NSDate *selectedDate;
@property (retain, nonatomic) NSNumber *selectedGender;
@property (retain, nonatomic) NSNumber *selectedAge;
@property (retain, nonatomic) NSDate *currentDate;

- (void)updateChildInfoWithBirthday:(id)a0 gender:(id)a1 Completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
