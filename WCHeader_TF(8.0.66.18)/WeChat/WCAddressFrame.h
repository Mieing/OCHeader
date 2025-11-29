@class NSMutableArray;

@interface WCAddressFrame : NSObject {
    const char *m_symbolName;
}

@property (nonatomic) unsigned long long address;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) unsigned int repeatCountInBackground;
@property (retain, nonatomic) NSMutableArray *childAddressFrame;

- (id)initWithAddress:(unsigned long long)a0 withRepeatCount:(unsigned int)a1 isInBackground:(BOOL)a2;
- (void)addChildFrame:(id)a0;
- (id)getInfoDict;
- (id)makeInfoDict;
- (void)symbolicate;
- (id)tryFoundAddressFrameWithAddress:(unsigned long long)a0;
- (id)description;
- (id)descriptionWithDeep:(int)a0;
- (void).cxx_destruct;

@end
