@class NSString, NSNumber;

@interface IESIMReadReceiptIdentifier : NSObject <NSCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, copy, nonatomic) NSNumber *conversationShortID;

- (id)initWithConvID:(id)a0 msgID:(id)a1 convShortID:(id)a2;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
