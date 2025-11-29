@class NSString;

@interface TextState3rdPartyDataItem : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *buffer;
@property (retain, nonatomic) NSString *keyBuffer;

- (id)initWithJumpInfo:(id)a0;
- (id)jumpInfo;
- (BOOL)isEqualToDataItem:(id)a0;
- (void).cxx_destruct;

@end
