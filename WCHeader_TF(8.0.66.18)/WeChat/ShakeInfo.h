@interface ShakeInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiShakeTimes;
@property (nonatomic) unsigned int m_uiBackGroundImgID;

- (void)preInit;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
