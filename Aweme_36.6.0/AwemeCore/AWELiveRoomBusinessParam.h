@class NSMutableDictionary;

@interface AWELiveRoomBusinessParam : NSObject

@property (nonatomic) long long businessType;
@property (retain, nonatomic) NSMutableDictionary *businessContextParams;
@property (retain, nonatomic) NSMutableDictionary *businessClickParams;
@property (retain, nonatomic) NSMutableDictionary *businessFirstShowParams;
@property (retain, nonatomic) NSMutableDictionary *businessJsonParams;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;

@end
