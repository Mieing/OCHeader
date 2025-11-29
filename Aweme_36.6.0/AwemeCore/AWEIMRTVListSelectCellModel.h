@class NSString;

@interface AWEIMRTVListSelectCellModel : NSObject

@property (copy, nonatomic) NSString *secUID;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) double lastActiveTime;
@property (nonatomic) BOOL preferSelected;

+ (id)cellModelWIthSecUID:(id)a0 isSelected:(BOOL)a1 lastActiveTime:(double)a2;
+ (id)cellModelWIthSecUID:(id)a0 isSelected:(BOOL)a1;

- (void)updateIsSelected:(BOOL)a0;
- (void)updateLastActiveTime:(double)a0;
- (void)updatePreferSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
