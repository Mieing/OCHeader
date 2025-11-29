@class NSString;

@interface AWEIMCombineShareEditInfo : NSObject <IESIMMessageEditInfoProtocol>

@property (nonatomic) BOOL isEdited;
@property (nonatomic) long long editUid;
@property (nonatomic) long long editTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
