@class NSArray, NSAttributedString;

@interface BDASRichTextTruncationConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSAttributedString *truncationString;
@property (copy, nonatomic) NSArray *activeRanges;
@property (nonatomic) double truncationWidth;
@property (nonatomic) BOOL shouldTruncateActiveRange;
@property (nonatomic) BOOL enableForceTruncation;
@property (nonatomic) BOOL disableTrailingWhitespaceAndNewline;
@property (nonatomic) BOOL checkTruncationStatus;
@property (nonatomic) BOOL fixRLOCharacter;

- (id)initWithTruncationString:(id)a0 activeRanges:(id)a1 truncateActiveRange:(BOOL)a2 forceTruncation:(BOOL)a3;
- (id)initWithTruncationWidth:(double)a0 truncateActiveRange:(BOOL)a1 forceTruncation:(BOOL)a2;
- (id)initWithTruncationWidth:(double)a0 truncateActiveRange:(BOOL)a1 forceTruncation:(BOOL)a2 disableTrailingWhitespaceAndNewline:(BOOL)a3;
- (id)initWithTruncationString:(id)a0 activeRanges:(id)a1 truncateActiveRange:(BOOL)a2 forceTruncation:(BOOL)a3 disableTrailingWhitespaceAndNewline:(BOOL)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
