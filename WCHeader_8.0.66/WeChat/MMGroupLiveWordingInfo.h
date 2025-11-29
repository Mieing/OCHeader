@class NSString;

@interface MMGroupLiveWordingInfo : NSObject

@property (retain, nonatomic) NSString *wordingZhCN;
@property (retain, nonatomic) NSString *wordingZhHK;
@property (retain, nonatomic) NSString *wordingZhTW;
@property (retain, nonatomic) NSString *wordingEN;

- (id)initWithStartTipJson:(id)a0;
- (id)currentWording;
- (void).cxx_destruct;

@end
