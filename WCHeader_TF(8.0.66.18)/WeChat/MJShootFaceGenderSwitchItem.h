@class NSString;

@interface MJShootFaceGenderSwitchItem : NSObject <MJShootBubbleSwitchItem>

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long faceGender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 faceGender:(long long)a1;
- (void).cxx_destruct;

@end
