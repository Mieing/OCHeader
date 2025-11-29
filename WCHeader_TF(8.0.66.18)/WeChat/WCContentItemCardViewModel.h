@class NSString;

@interface WCContentItemCardViewModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic) double fittingHeight;
@property (retain, nonatomic) NSString *avatar;
@property (retain, nonatomic) NSString *usrName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *duration;
@property (nonatomic) BOOL showPicIcon;
@property (nonatomic) BOOL showSightPlayIcon;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *titleText;

+ (id)fromContentItem:(id)a0;
+ (double)calCoverFittingHeightWithThumbWidth:(unsigned int)a0 height:(unsigned int)a1;

- (id)debugDescription;
- (void).cxx_destruct;

@end
