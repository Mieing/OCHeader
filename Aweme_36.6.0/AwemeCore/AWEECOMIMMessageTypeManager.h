@class NSLock, NSMutableDictionary;
@protocol AWEECOMIMCellRegisterProtocol;

@interface AWEECOMIMMessageTypeManager : NSObject

@property (retain, nonatomic) id<AWEECOMIMCellRegisterProtocol> shopServiceCellRegister;
@property (retain, nonatomic) id<AWEECOMIMCellRegisterProtocol> authorServiceCellRegister;
@property (retain, nonatomic) id<AWEECOMIMCellRegisterProtocol> instantRetailServiceCellRegister;
@property (retain) NSMutableDictionary *cellRegisterMap;
@property (retain, nonatomic) NSLock *cellRegisterLock;

+ (id)shareInstance;

- (id)cellRegisterWithPigeonBizType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
