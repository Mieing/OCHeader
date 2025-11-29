@interface WCAopBlockImp : NSObject {
    void /* function */ *m_blockIMP;
}

@property (readonly, nonatomic) void /* function */ *blockIMP;

- (id)initFromBlock:(id)a0;
- (void)dealloc;

@end
